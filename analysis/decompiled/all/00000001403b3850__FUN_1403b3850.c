// Function: FUN_1403b3850
// Addr: 1403b3850
// Size: 51 bytes


ulonglong FUN_1403b3850(uint *param_1,uint *param_2)

{
  if (*param_2 <= *param_1) {
    if (*param_1 != *param_2) {
      return 1;
    }
    if (param_2[2] <= param_1[2]) {
      if (param_2[2] < param_1[2]) {
        return 1;
      }
      if (param_2[1] <= param_1[1]) {
        return (ulonglong)(param_2[1] < param_1[1]);
      }
    }
  }
  return 0xffffffff;
}

