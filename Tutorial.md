# Simples Calculadora

> Realiza operações matemáticas básicas em C.

## :arrow_forward: Começando
Para executar o código pode ser utilizado alguma dessas IDE + compilador: 

- [Dev C++](https://www.bloodshed.net/) (Disponível para **Windows**)
- [Code::Blocks](https://www.codeblocks.org/downloads/) (Disponível para **Windows, Linux e Mac**)

Ou outra de sua preferência.

## :books: Operações
As operações matemáticas que o código realiza são as seguintes:

| OPERAÇÃO | EXEMPLO|
| -- | -- |
| Soma | 2 + 1 = 3 |
| Subtração | 3 - 1 = 2 |
| Multiplicação | 3 * 2 = 6|
| Divisão | 5 / 2 = 2,5|
| Potência | 2^3 = 8 |
| Divisão com resto | 5 / 2 = 2 com resto 1|
| Verificar se é primo | 5 é um número primo |


As operações são realizadas conforme código abaixo:

```
	printf ("Informe o dividendo: ");
	scanf ("%d", &num1);
	printf ("Informe o divisor: ");
	scanf ("%d", &num2);
			
	divisao = num1 / num2;
	resto = num1 % num2;
	printf ("Resultado: %d com resto %d\n\n", divisao, resto);
```

Gerando o seguinte resultado:

![Exemplo](https://lh3.googleusercontent.com/milqJ181NOINMzLr_vvGlv16gGRLiw_gpQMCBgtqBGsfY_UVXQhAJPb-RH2jnwuyH7YgDR9EhaFJdISWBA8RxKIhsXLkYLXf0EaZfuKyfMGYkyrjHbv9MFkeOnRfh-CoYM-X7vQbBCOFDF61QTqBnxSVuUd1kyEp3CJqzxKZKB4BojhPKqNyzWof0IivaeZLK4ZxfScvblTjiXCp9ZFaolBEsJyUMtw8tfFdboUACVGEZcFv0g-g4tfdpj6mJZwKEUoxnqYQwhWprPnHfTxTf6lgg3xYHsQifR76RLfVhp3jM-lRQMlUUAtRh6L5PI_aRP6JBleIzA1-I6yoAOYbdRRrqeNsFT0p7UCMHN67HySq2i6q3kDpC20qOxagSz5Bgiqb_pzGYfbgN0_RmzC-o8S0sC6C52aZQhy_nrgGWVeOUh7ZWNkkfu8y2RnOqwYloxmulN_QJaRjMI-oDolYS4MCdnPMyb4fSpUXinUwmiD4_B2a8qd6ZlcD3e52-B64hQaw3E4gqpzNk0xVhOWh4FsoHfa38QCj7r7wFPHD0JmCqd75gcF6BB7_Tht32U_au-E1jJR2wTcezzwUo0_Xb8ndBKfwVoTRlU8mVI2QcbgCoe1eCutfTsg-mi3XNufA5aRw_6NZlLSAONK2yoyP8C8UTWiL4PdEObntcIEgEWujKFa_buxdeMY1PPBVoJ58JzdRlvY8PuyGr11WzmTrpIea6kQ6jEwZg0-cGMPuRMKteXg6lwFJB2Ctc2y7-xfWaixJduTlssevGn4Gg_SzOKUkTc-4_533UpBUfP2BHinvY2v8W5K_1N3kGGq5n3XOCQj7iZWjcGU1-i9Y5qnDvbD2MmU4A99B9-HhLX0ZUgb2kmETDNYGXIpPTAIWd2pUoIMVv8JBsJOFm_4NRqvtD45Eh4gvc6QkFrlBzOT3CCRD=w297-h219-no?authuser=0)

# :warning: _Atenção_
Conforme a IDE usada os acentos e letras padrão do português podem desconfigurar.