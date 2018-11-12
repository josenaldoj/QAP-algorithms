#ifndef _GA_QAP_H_
#define _GA_QAP_H_

#include <vector>

class GA_QAP 
{
	private:
		
		/* this is a QAP solution  */
		int* chromossome;

		int max_size_population;

		int size_initial_population;

		std::vector<int*> population;

		/** instance size of QAP */
		int size_problem;

	public:

		/**
		 * @brief      Constructs the object.
		 */
		GA_QAP();

		/**
		 * @brief      Destroys the object.
		 */
		~GA_QAP();

		/**
		 * @brief      Generates an initial population randomly
		 */
		void generate_initial_population();

		/**
		 * @brief      Randomly select two individuals to apply crossover
		 *
		 * @return     the new individual generated
		 */
		int* selection ();

		/**
		 * @brief      Producing a new feasible solution (i.e., a child) 
		 			   by combining two individuals. 
		 *
		 * @param      i     the father
		 * @param      j     the mother
		 *
		 * @return     the new individual generated by combining i and j
		 */
		int* crossover(int* i, int* j);

		/**
		 * @brief       Increasing diversity in the population by introducing
		 				random variations in the members of the population. 
		 */
		void mutation();



};


#endif