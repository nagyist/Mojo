#include "NotifyPropertyChanged.hpp"

#include "Mojo.Core/Assert.hpp"

#define VERIFY_PROPERTY_CHANGED_RELEASE( propertyName ) 

namespace Mojo
{
namespace Interop
{

void NotifyPropertyChanged::OnPropertyChanged( String^ propertyName )
{
    PropertyChanged( this, gcnew PropertyChangedEventArgs( propertyName ) );
}

}
}