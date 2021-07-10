using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Lakeport.ViewModels;
using System.Windows.Input;

namespace Lakeport.Commands
{
    public class UpdateView : ICommand
    {
        private HomeViewModel viewModel;

        public UpdateView(HomeViewModel viewModel)
        {
            this.viewModel = viewModel;
        }

        public event EventHandler CanExecuteChanged;

        public bool CanExecute(object parameter)
        {
            return true;
        }

        //Execute the vuew if either Home or Rent view is clicked
        public void Execute(object parameter)
        {
            if (parameter.ToString() == "Home")
            {
                viewModel.SelectedViewModel = new HomeViewModel();
            }
            else if (parameter.ToString() == "Rent")
            {
                viewModel.SelectedViewModel = new RentViewModel();
            }
        }
    }
}
