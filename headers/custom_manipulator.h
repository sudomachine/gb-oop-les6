#ifndef CUSTOM_MANIPULATOR_H
#define CUSTOM_MANIPULATOR_H

#include <ostream>

/**
 * @brief endll used to for console output as like double std::endl manipulator
 * @param stream is std::cout object
 * @return stream object with double endl manipulator
 */
template<typename CharT, typename Traits>
  std::basic_ostream<CharT, Traits>&
  endll(std::basic_ostream<CharT, Traits>& stream)
  {
      stream.put(stream.widen('\n'));
      stream.put(stream.widen('\n'));
      return flush(stream);
  }

#endif // CUSTOM_MANIPULATOR_H
