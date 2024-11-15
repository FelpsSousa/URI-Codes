/*  The Felps Code
*   GitHub: https://github.com/FelpsSousa/
*   LinkedIn: https://www.linkedin.com/in/felipeluis-felpssousa/
*   TikTok: @thefelps.code
*   YT: @thefelpscode
*/

-- SELECT BASICO - SQL - NIVEL 4 | +4.1 PONTOS.

-- Criacao da tabela customers.
CREATE TABLE customers (
  id SERIAL PRIMARY KEY,
  name VARCHAR(100),
  street VARCHAR(100),
  city VARCHAR(100),
  state CHAR(2),
  credit_limit NUMERIC(10, 2)
);

-- Insercao dos dados na tabela customers.
INSERT INTO customers (name, street, city, state, credit_limit)
VALUES
  ('Pedro Augusto da Rocha', 'Rua Pedro Carlos Hoffman', 'Porto Alegre', 'RS', 700.00),
  ('Antonio Carlos Mamel', 'Av. Pinheiros', 'Belo Horizonte', 'MG', 3500.50),
  ('Luiza Augusta Mhor', 'Rua Salto Grande', 'Niteroi', 'RJ', 4000.00),
  ('Jane Ester', 'Av 7 de setembro', 'Erechim', 'RS', 800.00),
  ('Marcos Antônio dos Santos', 'Av Farrapos', 'Porto Alegre', 'RS', 4250.25);

SELECT name
FROM customers
WHERE state = 'RS';