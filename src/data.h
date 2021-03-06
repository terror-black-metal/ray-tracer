#ifndef _DATA_H_
#define _DATA_H_

#include <stdbool.h>

#define WWIDTH 800
#define WHEIGHT 600
#define BPP_DEPTH 16

#define INF 9999

#define WMAP 800
#define HMAP 600

int pos_x, pos_y;
int speed_x, speed_y;
int accel_x, accel_y;
float theta, pi, pov;
bool is_pov, mode_3d;


typedef struct {
  int w;
  int h;
} wh;

#define max_texture_sheets 200
wh wh_array[max_texture_sheets]; 

typedef struct {
  int x;
  int y;
} point;

#define max_ray_corners 2000
point ray_corners[max_ray_corners]; 
int current_ray_corner;

typedef struct {
  point a;
  point b;
} segment;

#define max_ray_obstacles 2000
segment ray_obstacles[max_ray_obstacles];
int current_ray_obstacle;

typedef struct {
  point a;
  point b;
  point c;
  point d;
} quad;
#define max_quad 2000
quad quads[max_quad];
int current_quad;

typedef struct {
  point center;
  point out;
  float angle; 
} ray;

#define max_rays 2000
ray rays[max_rays];
int current_ray;

typedef struct {
  point a;
  float da;
  float aa;
  point b;
  float db;
  float ab;
} triangle;
#define max_triangles 2000
triangle triangles[max_triangles];
int current_triangle;

void register_ray_corner(int x, int y);
void register_ray_obstacle(int x1, int y1, int x2, int y2);

#endif
