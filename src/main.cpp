#include <iostream>

#include "messages.h"

using namespace std;

int main()
{

  // TODO for each file, read timestamp, then entire message, then stop at end or at zero
  // TODO read all files (i.e. for all threads)
  // TODO handle journalling (i.e. per thread)

  auto timestamp = 0L; // todo read from file
  std::unique_ptr<IMessage> message = CreateMessage(0);
  char* buffer = 0;
  message->Deserialise(buffer);
  auto logline = message->GenerateLogMessage();
  std::cout << logline << std::endl;
}

