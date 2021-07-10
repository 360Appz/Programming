using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Lakeport.Commands;
using System.Windows.Input;

namespace Lakeport.ViewModels
{
    //Default class which Homeview inherits from Baseview
    public class HomeViewModel : BaseView
    {
        private BaseView _selectedViewModel;

        //Properties for selected view model
        public BaseView SelectedViewModel
        {
            get { return _selectedViewModel; }
            set
            {
                _selectedViewModel = value;
                OnPropertyChanged(nameof(SelectedViewModel));
            }
        }
        public ICommand UpdateView { get; set; }

        //Constructor called when Homeviewmodel is activated
        public HomeViewModel()
        {
            UpdateView = new UpdateView(this);
        }

    }
}
