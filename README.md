# txt2ttx
## Converts plaintext to TTI (Teletext page) files
-----

### Help
The program outputs via stdio. Pipe/redirect it a file and redirect it to another file, like this:  
`main < in >> out.tti`

### Known issues
* Totally breaks compatiility if there's more than 9 subpages (Y2K all over again! Sadly leftpadding is a PITR in C)

### Roadmap
* Add support for banners (top of page)
* Add support for row headers (like the Launch schedule)
