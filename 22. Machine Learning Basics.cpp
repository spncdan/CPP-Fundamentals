// CIS 3100 4/15/24

// Basics of Machine Learning Algorithms

// Needed for Project #2

// This is alot of writing but this is based on slides going over these Algorithms

// ---------------------------------------------------------------------------------------------------------------------------------

// Naive Bayes Algorithm

// The Naive Bayes Algorithm is used for classification and assumes there is no correlation between features.

// Probability - likelihood of an event to occur, calculated as (No. of desired outcomes / Total number of outcomes)

// Conditional Probability - Likelihood of event A occuring given that another event (related to A) has already occured.

// Joint Probability - Events are INDEPENDENT if the occurence of one event doesn't have ant impact on the occurance of another.

// P(A and b) = P(A) * P(B) ----> equation 1 (independent events)

// Example: The probability of a die landing on 1 and a coin landing on heads is ---> (1/8) * (1/2) = 0.08 or 8% chance

// Two events are DEPENDENT if the occurrence of one event has an influence on the occurrence of another event.

// Example: When picking two cards from the same deck, the probability of picking the second card is influenced by the removal of the first card. Where the probability of choosing the first card would be 13/52 and the probability of selecting a spade as the second card would be 12/51.

// P(A and B) = P(A) * P(B|A) ----> equation 2 (dependent events)

// Bayes' Theorem: For any two events, the join probability is commutative

// P(A and B) = P(B and A) ----> equation 3 (for independent and dependent events)

// Diving both sides of the equation above by P(B) will get you Bayes' theorem ^

// From equation 2 we know that:
// P(A and B) = P(A) * P(B|A), and therefore
// P(B and A) = P(B) * P(A|B)

// Naive Bayes Classifier: Calculates the probability of a class or label (Y) given a set of observations (X)

// P(Yi | X1, X2, ..... XN) = (P(X1,X2,......,XN | Yi) * P(Yi) / P(X1,X2,......,XN)

// P(X1, X2,.....XN | Yi) * P(Yi) referes to the probability of a specified combination of features given a particular label

// Naive Bayes classifier assumes thats all features are independent of each other.

// The algorithm creates a seperate probability distribution for each class/label independently.

// If we have 3 classes and 4 features, there will be 12 probability distrubutions generated and stored (3*4)

// Build a class for a each distribution using a function.

// 1. Gaussian (Normal) Distribution is good for continuous features.

// 2. Bernoulli Distribution is ideal for binary features (Yes/No, 1/0, True/False, etc...)

// 3. Multinomial Distribution is appropriate for discrete features (number of car doors, etc...)

// Naive Bayes Classifier is very fast (useful if speed is valued over accuracy)

// However, high speeds dont always result in high accuracy, the algorithm assumes all features are independent which isn't always the case in real-life.

// ---------------------------------------------------------------------------------------------------------------------------------

// K-Nearest Neighbors: Supervised learning algorithm used for classification which tries to predict the correcr class a data point by calaulating the distance between the data point and all of the training data.

// Calculates the probability of the test data belonging to the classes of 'K' training data.

// The class with the highest probability is chosen through the closest point in distance.

// Vote on the labels depending on which number of classes has the closest distance to a point which we are trying to identify.

// K = # of nearest datapoints (neighbors)

// Finding the idea K-value is done by starting off at a smaller value and incrementing the distance to increase accuracy.

// ---------------------------------------------------------------------------------------------------------------------------------

// Support Vector Machines: Supervised learning algorithm which is great for binary classification (prediction of 2 classes) and attempts to draw a line which seperates data into different classes.

// The ideal Maximum Margin Hyperplane (line) makes it as clear as possible the seperation between the two data points.

// Attempts to plot a boundary between the data points known as negative and positive hyperplanes which begin at the support vectors (two nearest data points, one from group A and one from group B.

// Data must be linearly seperable data for this algorithm to work.

// Data that is able to be depicted on a 2D graph, and it is possible to draw single straight line (hyperplane) to seperate the two classes.

// Distance between hyperplane and the closest points of both classes is known as the margin.

// Support vectors are lines which borders the margin on both sides of the hyperplane.

// The overall goal of this algorithm is to maximize the width of the margins to have as much separation between the two classes as possible.

// If data is not linearly separable we can take the data and transform it into a higher dimensional space and then draw a hyperplane.

// This is known as a kernel trick.

// Kernels are mathematical functions which are used to transform data points into higher dimensions.

// When dealing with data with several dimensions (features), it is important to select the correct kernel.

// When dealing with overlapping classes you can do regularization.

// It is a process of handling the overlapping classes.

// 'c' parameter on a SVM model is inversely proportional to the margin.

// A regularization parameter closer to 0 results in more points being misclassified.

// Smaller regularization parameters result in wider margins for the hyperplanes to separate the two classes.

// A high regularization parameter (c) will allow for a hyperplane to that 'flexes' to accommodate the training data points closer to the margin and thus correctly identify them.

// Soft margin is there the line bends as needed to accomodate all the correct training points when regularization is high.

// Gamma (Y) defines how far the impact of a training data point reaches.

// Low gamma value tells us that we hsould consider far way point when deciding the deicsion boundary. This gives smooth linear separation between two classes.

// High gamma value tells us that we should consider near points when deciding the decision boundary. This gives a curvy separation between two classes and may sometimes overfit the test data.

// SVM Advantages

// Effective in high dimensions (several x values in dataset)

// Memory efficient as SVM uses a subset of training point for decision function.

// Performs well with linear as well as non linear boundaries. For non-linear boundaries we need to select the right kernel.

// Protected against outliers (controlled using C)

// SVM Disadvantages

// Large datasets take longer time to process

// Finding optimal parameters is done by trial and error

// Multiclass classification can be problematic
