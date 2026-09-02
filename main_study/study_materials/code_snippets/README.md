# Code Snippets

This folder contains the code snippets used as learning stimuli in the pre-tests and post-tests of the study.

## File Naming Convention

Each file is named as `{vulnerability_type}_{variant}.c`, where:
- `{vulnerability_type}` corresponds to the CWE category (e.g., `oob` for Out-of-Bounds Write, `sqli` for SQL Injection)
- `{variant}` is either `a` (pre-test) or `b` (post-test)

| File | Vulnerability Type | CWE | Language |
|------|--------------------|-----|----------|
| `oob_a.c` / `oob_b.c` | Out-of-Bounds Write | CWE-787 | C |
| `uaf_a.c` / `uaf_b.c` | Use-After-Free | CWE-416 | C |
| `sqli_a.c` / `sqli_b.c` | SQL Injection | CWE-89 | C |
| `xss_a.c` / `xss_b.c` | Cross-Site Scripting (XSS) | CWE-79 | PHP |

## Note on File Extensions

All files use the `.c` extension for consistency in file handling and display within the study interface. However, the XSS snippets (`xss_a.c`, `xss_b.c`) contain **PHP** code, reflecting a common web application context for this vulnerability type. These snippets are intended as **learning stimuli for display purposes only** and are not meant to be compiled or executed.

## Source and Adaptation

- C-language snippets (SQL Injection, Out-of-Bounds Write, Use-After-Free) were adapted from the [CASTLE benchmark](https://github.com/CASTLE-Benchmark/CASTLE-Benchmark).
- XSS snippets were adapted from an open-source collection of vulnerable PHP examples.


