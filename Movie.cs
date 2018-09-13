using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloWorld
{
    class Movie
    {
        private string rating;
        public string title;
        public string director;

        public Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            Rating = aRating;
        }

        // GETTERS AND SETTERS
        public string Rating
        {
            get { return rating; }
            set {
                if (value == "G" || value == "PG" || value == "PG-13" || value == "R" || value == "NR")
                {
                    rating = value;
                }
                else
                {
                    rating = "NR";
                }
            }
        }
        
        /*
        public Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            SetRating(aRating);
        }
        public void SetRating(string aRating)
        {
            if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
            {
                rating = aRating;
            } else
            {
                rating = "NR";
            }
        }

        public string GetRating()
        {
            return rating;
        }
        */
    }
}
