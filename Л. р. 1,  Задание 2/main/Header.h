#pragma once
#include <string>

// ���������� �������
unsigned short ReadPersonAge();
std::string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);
void ReadPersonSalary(double* salary);
void ReadPersonData(std::string& name, unsigned short& age, double& salary);
void ReadPersonData(std::string& name, unsigned short& age, double& salary, unsigned short& weight);
void WritePersonData(const std::string& name, const std::string& height = "", const std::string& weight = "", const unsigned short* age = nullptr);

// ���������� ���������� ����������
extern unsigned short personHeight;
extern std::string personSalary;