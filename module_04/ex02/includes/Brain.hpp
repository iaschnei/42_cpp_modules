#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
public:
    Brain();
    Brain(const Brain &copy);
    ~Brain();

    Brain &operator=(const Brain &copy);
    std::string ideas[100];
    void print_ideas(void);

private:
    void fill_ideas(void);
};

#endif // !BRAIN_HPP
