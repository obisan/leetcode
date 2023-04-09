const Home = {
    data() {
        return {
            name: '',
            text: '',
            messages: [],
            cnValidation: 'needs-validation',
            errors: {
                form: '',
                lastActivity: ''
            }
        }
    },
    methods: {
        fetchLastActivity() {
            return fetchApiKey('/api/lastActivity')
        },
        addMessage(name, text) {
            return fetch('/api/messages', {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify({ name, text })
            })
        },
        // todo: delete unused
        fetchApiKey() {
            return fetch('/api/secret')
                .then(res => res.json())
        },
        reloadLastActivity() {
            this.fetchLastActivity()
                .then(res => res.json())
                .then(messages => {
                    this.messages = messages
                    this.errors.lastActivity = ''
                })
                .catch(() => {
                    this.errors.lastActivity = 'Something wrong'
                })
        },
        onSubmit() {
            if (this.name && this.text) {
                this.cnValidation = 'needs-validation'
                this.addMessage(this.name, this.text)
                    .then(() => {
                        this.name = ''
                        this.text = ''
                        this.errors.form = ''
                    })
                    .then(() => this.reloadLastActivity())
                    .catch(() => {
                        this.errors.form = 'Something wrong'
                    })
            } else {
                this.cnValidation = 'was-validated'
            }
        }
    },
    async mounted() {
        await this.reloadLastActivity()
    }
}

const app = Vue.createApp(Home)
app.mount('#home')