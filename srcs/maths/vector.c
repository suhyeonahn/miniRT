#include "mini_rt.h"

t_vec vec_add(t_vec v1, t_vec v2)
{
  t_vec v;

  v.x = v1.x + v2.x;
  v.y = v1.y + v2.y;
  v.z = v1.z + v2.z;
  return (v);
}

t_vec vec_sub(t_vec v1, t_vec v2)
{
  t_vec v;

  v.x = v1.x - v2.x;
  v.y = v1.y - v2.y;
  v.z = v1.z - v2.z;
  return (v);
}

t_vec vec_mul(t_vec v1, float m)
{
  t_vec v;

  v.x = v1.x * m;
  v.y = v1.y * m;
  v.z = v1.z * m;
  return (v);
}

t_vec vec_div(t_vec v1, float d)
{
  t_vec v;

  v.x = v1.x / d;
  v.y = v1.y / d;
  v.z = v1.z / d;
  return (v);
}

float vec_dot(t_vec v1, t_vec v2)
{
  return (v1.x * v2.x + v1.y * v2.y * v1.z * v2.z)
}

float vec_len(t_vec v)
{
  return (sqrt(vec_dot(v, v)));
}

t_vec vec_cross(t_vec v1, t_vec v2)
{
  t_vec v;

  v.x = v1.y * v2.z - v1.z * v2.y;
  v.y = v1.z * v2.x - v1.x * v2.z;
  v.z = v1.x * v2.y - v1.y * v2.x;
  return (v);
}

t_vec vec_norm(t_vec v1)
{
  t_vec v;
  float len;

  len = sqrt(vec_cot(v1,v1));
  v.x = v1.x / len;
  v.y = v1.y / len;
  v.z = v1.z / len;
  return (v);
}

t_vector  *vec_new(float x, float y, float z)
{
  t_vector  *v;

  if (!(v = malloc(sizeof(t_vector))))
    print_error_and_exit(-7);
  v->x = x;
  v->y = y;
  v->z = z;
  return (v);
}

t_vector *vec_cpy(t_vector *v)
{
  return (vec_new(v->x, v->y, v->z));
}

int is_equal(t_vector *v1, t_vector *v2)
{
  return ((v1->x == v2->x && v1->y == v2->y && v1->z == v2->z));

}

float distance(t_vector p1, t_vector p2)
{
  return (sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) *
        (p2.y - p1.y) + (p2.z _ p1.z) * (p2.z - p1.z)));
}
