#pragma once

#include <string>

class HospitalWorker {
public:
    HospitalWorker(std::string fullName, int birthYear, std::string address, std::string education);
    virtual ~HospitalWorker() = default;

    std::string getInfo() const;

protected:
    std::string fullName_;
    int birthYear_;
    std::string address_;
    std::string education_;
};

class Nurse : public HospitalWorker {
public:
    Nurse(
        std::string fullName,
        int birthYear,
        std::string address,
        std::string education,
        double hourlyRate,
        int workedHours
    );

    double calculateSalary() const;
    std::string getReport() const;

private:
    double hourlyRate_;
    int workedHours_;
};

class Surgeon : public HospitalWorker {
public:
    Surgeon(
        std::string fullName,
        int birthYear,
        std::string address,
        std::string education,
        double paymentPerPatient,
        int patientsCount
    );

    double calculateSalary() const;
    std::string getReport() const;

private:
    double paymentPerPatient_;
    int patientsCount_;
};

