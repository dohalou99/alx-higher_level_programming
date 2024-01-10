$.get('https://swapi.co/api/films/?format=json', function (data) {
  for (let film of data.results) {
    $('ul#list_movies').append('<li>' + film.title + '</li>');
  }
});
