# PlainLLM-VulnScaffold

Two chat-based learning tools for software vulnerability education, sharing a single backend.

- **PlainLLM** — baseline plain LLM chat interface (React)
- **VulnScaffold** — structured vulnerability learning tool (single HTML file)
- **server** — shared Flask backend (Python), requires `OPENAI_API_KEY`

## Running locally

```bash
# Start the server
cd server && pip install -r requirements.txt
export OPENAI_API_KEY=your_key_here
python app.py

# Start PlainLLM (in a separate terminal)
cd PlainLLM && npm install && npm start

# VulnScaffold — open index.html directly in a browser
```
