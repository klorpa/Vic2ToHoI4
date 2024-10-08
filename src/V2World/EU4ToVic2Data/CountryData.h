#ifndef COUNTRY_DATA_H
#define COUNTRY_DATA_H



#include <optional>
#include <string>



namespace Vic2
{

class CountryData
{
  public:
	class Factory;
	class Builder;

	[[nodiscard]] const auto& getLastDynasty() const { return lastDynasty; }
	[[nodiscard]] const auto& getLastMonarch() const { return lastMonarch; }

  private:
	std::optional<std::string> lastDynasty;
	std::optional<std::string> lastMonarch;
};

} // namespace Vic2



#endif // COUNTRY_DATA_H