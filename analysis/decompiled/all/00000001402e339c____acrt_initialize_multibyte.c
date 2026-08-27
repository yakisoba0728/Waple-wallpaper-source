// Function: __acrt_initialize_multibyte
// Addr: 1402e339c
// Size: 96 bytes


/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  undefined8 uVar1;
  
  if (DAT_1404e4e9c == '\0') {
    DAT_1404e4e88 = &DAT_1404dcd60;
    DAT_1404e4e90 = &DAT_1404dca20;
    DAT_1404e4e80 = &DAT_1404dcc50;
    uVar1 = FUN_1402d98b0();
    FUN_1402e3074(0xfffffffd,1,uVar1,&DAT_1404e4e90);
    DAT_1404e4e9c = '\x01';
  }
  return 1;
}

