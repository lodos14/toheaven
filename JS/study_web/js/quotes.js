const quotes = [
  {
      quote: "산은 산이오",
      author: "뫼산",

  },
  {
      quote: "물은 물이오",
      author: "수산",

  },
  {
      quote: "불은 불이오",
      author: "화산",

  },
  {
      quote: "땅은 따이오",
      author: "토산",

  },
  {
      quote: "흙은 흑이요",
      author: "토산",

  },
  {
      quote: "나는 나요",
      author: "나산",

  },
  {
      quote: "너는 너요",
      author: "너산",

  },
  {
      quote: "우리집은 앞에",
      author: "앞산",

  },
  {
      quote: "뒷 산에",
      author: "니네집",

  },
  {
      quote: "앞동네",
      author: "히히",

  }
];

const quote = document.querySelector("#quote span:first-child");
const author = document.querySelector("#quote span:last-child");

const todaysQuote = quotes[Math.floor(Math.random() * quotes.length)];

quote.innerText = todaysQuote["quote"];
author.innerText = todaysQuote["author"]