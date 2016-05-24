#define DECLARE_INTERFACE(InterfaceName)                            \
  public:                                                           \
    virtual ~InterfaceName = 0;                                     \
  protected:                                                        \
    InterfaceName() = default;                                      \
    InterfaceName( const InterfaceName& ) = default;                \
    InterfaceName& operator=( const InterfaceName& ) = default;     \
  private:
