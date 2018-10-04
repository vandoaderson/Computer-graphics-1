#ifndef VEC3_H
#define VEC3_H

#include <iostream>

template <class T> class Vec3
{
    private:
        T x, y, z;

    public:
        // ------------ Constructors ------------

        // Contrutor
        Vec3() { x = y = z = 0; };

        Vec3(T xValue, T yValue, T zValue)
        {
            x = xValue;
            y = yValue;
            z = zValue;
        }

        // ------------ Getters e setters ------------

        void set(const T &xValue, const T &yValue, const T &zValue)
        {
            x = xValue;
            y = yValue;
            z = zValue;
        }

        T getX() const { return x; }
        T getY() const { return y; }
        T getZ() const { return z; }

        void setX(const T &xValue) { x = xValue; }
        void setY(const T &yValue) { y = yValue; }
        void setZ(const T &zValue) { z = zValue; }


        // Metodo zerar vetor
        void zero()
        {
            x = y = z = 0;
        }

        // normalisa  vetor
        void normalise()
        {
            // Calcula o tamanho do vetor
            T magnitude = sqrt((x * x) + (y * y) + (z * z));

            if (magnitude != 0)
            {
                x /= magnitude;
                y /= magnitude;
                z /= magnitude;
            }
        }

        //Produto vetorial
        static T dotProduct(const Vec3 &vec1, const Vec3 &vec2)
        {
            return vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;
        }

        //produto escalar
        T dotProduct(const Vec3 &vec) const
        {
            return x * vec.x + y * vec.y + z * vec.z;
        }


        // Produto vetorial
        static Vec3 crossProduct(const Vec3 &vec1, const Vec3 &vec2)
        {
            return Vec3(vec1.y * vec2.z - vec1.z * vec2.y, vec1.z * vec2.x - vec1.x * vec2.z, vec1.x * vec2.y - vec1.y * vec2.x);
        }


        void addX(T value) { x += value; }
        void addY(T value) { y += value; }
        void addZ(T value) { z += value; }


        static T getDistance(const Vec3 &v1, const Vec3 &v2)
        {
            T dx = v2.x - v1.x;
            T dy = v2.y - v1.y;
            T dz = v2.z - v1.z;

            return sqrt(dx * dx + dy * dy + dz * dz);
        }

        void display()
        {
            std::cout << "X: " << x << "\t Y: " << y << "\t Z: " << z << std::endl;
        }

        Vec3 operator+(const Vec3 &vector) const
        {
            return Vec3<T>(x + vector.x, y + vector.y, z + vector.z);
        }

        void operator+=(const Vec3 &vector)
        {
            x += vector.x;
            y += vector.y;
            z += vector.z;
        }

        Vec3 operator-(const Vec3 &vector) const
        {
            return Vec3<T>(x - vector.x, y - vector.y, z - vector.z);
        }

        void operator-=(const Vec3 &vector)
        {
            x -= vector.x;
            y -= vector.y;
            z -= vector.z;
        }

        Vec3 operator*(const Vec3 &vector) const
        {
            return Vec3<T>(x * vector.x, y * vector.y, z * vector.z);
        }

        // multiplica por um escalar
        Vec3 operator*(const T &value) const
        {
            return Vec3<T>(x * value, y * value, z * value);
        }

        void operator*=(const T &value)
        {
            x *= value;
            y *= value;
            z *= value;
        }

        Vec3 operator/(const T &value) const
        {
            return Vec3<T>(x / value, y / value, z / value);
        }

        void operator/=(const T &value)
        {
            x /= value;
            y /= value;
            z /= value;
        }
};

#endif // VEC3_H
