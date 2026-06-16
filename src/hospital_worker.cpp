#include "hospital_worker.hpp"

#include <sstream>
#include <utility>

HospitalWorker::HospitalWorker(std::string fullName, int birthYear, std::string address, std::string education)
    : fullName_(std::move(fullName)),
      birthYear_(birthYear),
      address_(std::move(address)),
      education_(std::move(education)) {}

std::string HospitalWorker::getInfo() const {
    std::ostringstream output;
    output << "Full name: " << fullName_ << '\n'
           << "Birth year: " << birthYear_ << '\n'
           << "Address: " << address_ << '\n'
           << "Education: " << education_ << '\n';
    return output.str();
}

Nurse::Nurse(
    std::string fullName,
    int birthYear,
    std::string address,
    std::string education,
    double hourlyRate,
    int workedHours
)
    : HospitalWorker(std::move(fullName), birthYear, std::move(address), std::move(education)),
      hourlyRate_(hourlyRate),
      workedHours_(workedHours) {}

double Nurse::calculateSalary() const {
    return hourlyRate_ * workedHours_;
}

std::string Nurse::getReport() const {
    std::ostringstream output;
    output << "Nurse report\n"
           << "Protected access example, worker name: " << fullName_ << '\n'
           << getInfo()
           << "Hourly rate: " << hourlyRate_ << '\n'
           << "Worked hours: " << workedHours_ << '\n'
           << "Salary: " << calculateSalary() << "\n";
    return output.str();
}

Surgeon::Surgeon(
    std::string fullName,
    int birthYear,
    std::string address,
    std::string education,
    double paymentPerPatient,
    int patientsCount
)
    : HospitalWorker(std::move(fullName), birthYear, std::move(address), std::move(education)),
      paymentPerPatient_(paymentPerPatient),
      patientsCount_(patientsCount) {}

double Surgeon::calculateSalary() const {
    return paymentPerPatient_ * patientsCount_;
}

std::string Surgeon::getReport() const {
    std::ostringstream output;
    output << "Surgeon report\n"
           << "Protected access example, education: " << education_ << '\n'
           << getInfo()
           << "Payment per patient: " << paymentPerPatient_ << '\n'
           << "Patients count: " << patientsCount_ << '\n'
           << "Salary: " << calculateSalary() << "\n";
    return output.str();
}

