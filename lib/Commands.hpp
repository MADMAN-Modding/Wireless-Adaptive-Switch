class Commands {
  public:
    enum command {
      PAIR,
      ON,
      OFF
    };

    /// @brief Returns the name of a comman as a string
    /// @param code 
    /// @return char*
    static const char* commandName(Commands::command code) {}
};
