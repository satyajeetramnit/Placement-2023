import logo from './Images/netflix.png';
import avatar from './Images/avatar.svg';
export default function App() {
  return (
    <>
    <div className='header w-full h-screen'>
      <nav className="px-20 py-2 flex justify-between items-center">
        <img src={logo} alt="logo" className='w-40' />
        <img src={avatar} alt="avatar" className='w-14 h-14 rounded-full' />
      </nav>
      <div className='flex flex-col space-y-4 text-slate-300 w-96 ml-20 mt-48'>
        <div className='font-bold text-5xl'>Dark</div>
        <div className='flex space-x-5'>
          <div className='py-2 w-28 text-center nav'>PLAY</div>
          <div className='py-2 w-28 text-center nav'>More Info</div>
        </div>
        <div className='text-xl'>When two children go missing in a small German town, its sinful past is exposed along with the double lives and fractured relationships that exist among four families as they search for the kids.</div>
      </div>
    </div>
    </>
  )
}