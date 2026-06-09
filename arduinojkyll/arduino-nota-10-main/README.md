# Arduino Nota 10

## Documentação do site MkDocs

Este repositório contém a documentação do projeto Arduino Nota 10, criada com MkDocs e o tema Material.

### Estrutura do repositório

- `.github/` — automações opcionais e workflows.
- `mkdocs.yml` — configuração do site.
- `docs/` — conteúdo da documentação que será publicado como site.
- `README.md` — documentação técnica e instruções para desenvolvedores.

### Como trabalhar no site

1. Ative o ambiente virtual:
   - `.\.venv\Scripts\activate`
2. Instale dependências se necessário:
   - `.\.venv\Scripts\python -m pip install mkdocs mkdocs-material`
3. Rode o servidor local:
   - `mkdocs serve`
4. Para publicar no GitHub Pages:
   - `mkdocs gh-deploy`

### Conteúdo principal

- `docs/index.md` — página inicial do site.
- `docs/primeiros-passos/` — introdução ao Arduino e exemplos básicos.
- `docs/fisica/` — projetos de Física com conteúdo didático.
- `docs/quimica/` — projetos de Química com sensor de temperatura.
- `docs/geografia/` — espaço reservado para futuras matérias.

### Equipe

- Flavius Gorgônio
- Karliane Vale
