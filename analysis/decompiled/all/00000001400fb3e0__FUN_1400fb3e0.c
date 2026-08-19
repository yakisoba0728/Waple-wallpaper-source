// Function: FUN_1400fb3e0
// Addr: 1400fb3e0
// Size: 111 bytes


undefined8 FUN_1400fb3e0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  *param_3 = 0;
  if (*param_2 == 0) {
    if (((param_2[1] == 0) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)) {
      *param_3 = param_1;
      (**(code **)(*param_1 + 8))();
      return 0;
    }
  }
  else if ((((*param_2 == -0x52b3e500) && (param_2[1] == 0x422f4bf7)) && (param_2[2] == 0x66757591))
          && (param_2[3] == 0xd13d993)) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 8))();
    return 0;
  }
  return 0x80004002;
}

