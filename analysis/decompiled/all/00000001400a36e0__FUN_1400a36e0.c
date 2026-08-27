// Function: FUN_1400a36e0
// Addr: 1400a36e0
// Size: 139 bytes


/* WARNING: Removing unreachable block (ram,0x0001400a3716) */

int FUN_1400a36e0(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x3ccb6c71)) {
    if ((char)param_1[0xb] == '\0') {
      *(undefined1 *)(param_1 + 0xb) = 1;
      param_1[10] = 1;
      lVar1 = cpuid_Version_info(1);
      pcVar2 = FUN_1400a3930;
      if ((*(uint *)(lVar1 + 0xc) & 0x900002) != 0x900002) {
        pcVar2 = *(code **)(param_1 + 0xc);
      }
      *(code **)(param_1 + 0xc) = pcVar2;
    }
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    (**(code **)(param_1 + 0xc))(param_1,&local_18);
    return param_1[10];
  }
  return 0;
}

