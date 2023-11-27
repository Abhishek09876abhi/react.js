// App.js
import React, { useState } from 'react';
import './App.css'; // Import your CSS file

function App() {
  const [view, setView] = useState('login');
  const [searchValue, setSearchValue] = useState('');
  const [showEmployee, setShowEmployee] = useState(false);

  const handleHomeClick = () => {
    setView('dashboard');
    setShowEmployee(false);
  };

  const handleUserIconClick = () => {
    setView('userList');
    setShowEmployee(false);
  };

  const handleSearch = (e) => {
    setSearchValue(e.target.value);
  };

  const handleEmployeeSearch = (employeeName) => {
    if (employeeName.toLowerCase().includes(searchValue.toLowerCase())) {
      return true;
    }
    return false;
  };

  const handleEmployeeClick = () => {/t styles for the app */

}

  return (
    <div className="App">
      {/* Your app content */}
      {/* Implement your login, dashboard, user list view components */}
      {/* Use conditional rendering based on the 'view' state */}

      {/* Sample usage of components and functionality */}
      {view === 'login' && (
        <div>
          {/* Login component */}
          <button onClick={() => setView('dashboard')}>Login</button>
        </div>
      )}

      {view === 'dashboard' && (
        <div>
          {/* Dashboard component */}
          <button onClick={handleHomeClick}>Home Icon</button>
          <button onClick={handleUserIconClick}>User Icon</button>
        </div>
      )}

      {view === 'userList' && (
        <div>
          {/* User list view */}
          <input type="text" placeholder="Search by employee name" onChange={handleSearch} />
          {/* Render employee cards based on search */}
          {employees.map((employee, index) => {
            if (handleEmployeeSearch(employee.name)) {
              return (
                <div key={index} onClick={handleEmployeeClick}>
                  {/* Employee card */}
                </div>
              );
            }
            return null;
          })}
        </div>
      )}

      {showEmployee && (
        <div>
          {/* Additional info for the selected employee */}
          {/* Close button or functionality to exit employee view */}
        </div>
      )}
    </div>
  );
}

export default App;
