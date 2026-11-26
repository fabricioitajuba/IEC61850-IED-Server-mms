# IEC61850-IED-Server-mms

Este programa simula um IED comunicando com o protocolo MMS da IEC61850

Este exemplo pode ser usado com o:

https://github.com/fabricioitajuba/IEC61850-IED-Explorer

### Para compilar:

Copie ou clone esse repositório para dentro da pasta /examples da libiec61850

~/libiec61850-1.6.2.1/examples/IED-Server-mms$

```
make clean
rm -f static_model.c static_model.h
make model
make
sudo ./IED-Server-mms
```
