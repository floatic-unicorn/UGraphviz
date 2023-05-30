#ifndef UGRAPHVIZ__GRAPH_HPP_
#define UGRAPHVIZ__GRAPH_HPP_


#include "ugraphviz/Subgraph.hpp"

namespace ugraphviz
{
class Graph : public Subgraph
{
public:
  Graph(std::string id, bool isDigraph = false);
  ~Graph();

  Graph(Graph &&) noexcept;
  Graph & operator=(Graph &&) noexcept;

  std::string Dump() const;

  bool IsDigraph() const noexcept{return isDigraph;}

private:
  bool isDigraph;
};
}
#endif
