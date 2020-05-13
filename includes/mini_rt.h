#ifndef MINI_RT_H
# define MINI_RT_H

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct  s_vec
{
  float x;
  float y;
  float z;
} t_vec

typedef struct s_ray
{
  t_vec3  o;
  t_vec3  d;
} t_ray;

typedef struct s_sphere
{
  t_vec3  position;
  float radius;
  t_vec3 color;
  struct s_sphere *next;
} t_sphere;

typedef struct      s_plane
{
  t_vec3        position;
  t_vec3        orientation;
  t_vec3        color;
  struct s_plane    *next;
}           t_plane;

typedef struct      s_square
{
  t_vec3        position;
  t_vec3        ori;
  float       size;
  t_vec3        color;
  struct s_square   *next;
}           t_square;

typedef struct      s_cylinder
{
  t_vec3        position;
  t_vec3        orientation;
  float       diameter;
  float       height;
  t_vec3        color;
  struct s_cylinder *next;
}           t_cylinder;

typedef struct      s_triangle
{
  t_vec3        point1;
  t_vec3        point2;
  t_vec3        point3;
  t_vec3        color;
  struct s_triangle *next;
}           t_triangle;

typedef struct      s_screen
{
  int         x;
  int         y;
}           t_screen;

typedef struct      s_alight
{
  float       ratio;
  t_vec3        color;
}           t_alight;

typedef struct      s_light
{
  t_vec3        position;
  float       ratio;
  t_vec3        color;
  struct s_light    *next;
}           t_light;

typedef struct      s_camera
{
  t_vec3        position;
  t_vec3        orientation;
  int         fov;
  struct s_camera   *next;
  struct s_camera   *prev;
}           t_camera;

typedef struct      s_phong
{
  t_vec3        am;
  t_vec3        sp;
  t_vec3        di;
}           t_phong;

typedef struct      s_hit
{
  float       t;
  t_vec3        normal;
  t_sphere      *sphere;
  t_plane       *plane;
  t_square      *square;
  t_cylinder      *cylinder;
  t_triangle      *triangle;
  t_vec3        phit;
}           t_hit;

typedef struct      s_scene
{
  t_screen      *screen;
  t_alight      *al;
  t_camera      *camerasfirst;
  t_camera      *cameras;
  t_light       *lightsfirst;
  t_light       *lights;
  t_sphere      *spheres;
  t_plane       *planes;
  t_square      *squares;
  t_cylinder      *cylinders;
  t_triangle      *triangles;
}           t_scene

#endif
