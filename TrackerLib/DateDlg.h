/**
 * @file DateDlg.h
 * @author Jacob Hughes
 *
 *
 */

#ifndef TESTTRACKER22_DATEDLG_H
#define TESTTRACKER22_DATEDLG_H

#include "Tracker.h"
class ProjectView;
#include <map>


/**
 * Class that describes the date dialog box
 * Users may enter an appropriate date to view on the tracker
 */
class DateDlg : public wxDialog {
private:

    /// The year
    int mYear = 2022;

    /// The month
    int mMonth = 1;

    /// The day
    int mDay = 31;

    /// The Tracker
    Tracker mTracker;

    /// The Project View
    ProjectView* mView = nullptr;

    /// boolean to ensure we don't refresh when not needed
    bool mRefresh = true;

public:

    DateDlg(wxWindow* parent, ProjectView *view, Tracker tracker);

    void OnOK(wxCommandEvent& event);

    /**
     * Get the refresh bool
     * @return the refresh bool
     */
    bool GetRefresh() {return mRefresh;}

};

#endif //TESTTRACKER22_DATEDLG_H
