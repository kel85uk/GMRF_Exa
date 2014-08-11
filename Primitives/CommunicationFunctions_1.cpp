#include "Primitives/CommunicationFunctions.h"
void connectRemoteElement(size_t localFragId, size_t localNeighId, int remoteRank, int location, int domain) {
neighbor_isValid[domain][location] = true;
neighbor_isRemote[domain][location] = true;
neighbor_fragCommId[domain][location] = localNeighId;
neighbor_remoteRank[domain][location] = remoteRank;
switch (location) {
case (0): {
iterationOffsetBegin[domain][0] = 0;
} break;
case (1): {
iterationOffsetEnd[domain][0] = 0;
} break;
case (2): {
iterationOffsetBegin[domain][1] = 0;
} break;
case (3): {
iterationOffsetEnd[domain][1] = 0;
} break;
}
}
