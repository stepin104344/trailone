/**
* @file prison.h
*
*/
#ifndef prison_H_INCLUDED
#define prison_H_INCLUDED

/**
* Records the information of Prisoner
* @param[in] crime for which prisoner has to be found
* @return ID of the prisoner
* @note Returns already exists for repeated data
*/
void addrecord();

void viewrecord();

void editrecord();

void searchrecord();

void deleterecord();

void login();

#endif /* #ifndef __prison_H__ */