class Commands {
  public:
    enum command {
      PAIR,
      ON,
      OFF
    };

    static const char* commandName(Commands::command code) {}
};
