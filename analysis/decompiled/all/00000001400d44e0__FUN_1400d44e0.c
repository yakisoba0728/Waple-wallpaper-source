// Function: FUN_1400d44e0
// Addr: 1400d44e0
// Size: 584 bytes


undefined8
FUN_1400d44e0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  INT_PTR IVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong *local_res18 [2];
  
  if (param_3[2] == 0) {
    return 0;
  }
  if (DAT_1404e52d0 == (FARPROC)0x0) {
    iVar1 = FUN_140290d80(&DAT_1404df730);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (DAT_1404df77c == 0x7fffffff) {
      DAT_1404df77c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (DAT_1404e52d0 == (FARPROC)0x0) {
      if ((DAT_1404e52c8 == (HMODULE)0x0) &&
         (DAT_1404e52c8 = (HMODULE)FUN_1400576d0(L"d3dcompiler_47.dll"),
         DAT_1404e52c8 != (HMODULE)0x0)) {
        DAT_1404e52d0 = GetProcAddress(DAT_1404e52c8,"D3DCompile");
        DAT_1404e52c0 = GetProcAddress(DAT_1404e52c8,"D3DReflect");
        if ((DAT_1404e52d0 != (FARPROC)0x0) && (DAT_1404e52c0 != (FARPROC)0x0)) goto LAB_1400d45d2;
      }
      FUN_140290ea0(&DAT_1404df730);
      FUN_1400986c0("DirectX compiler cannot be found, d3dcompiler_47.dll is missing.\n");
    }
    else {
LAB_1400d45d2:
      FUN_140290ea0(&DAT_1404df730);
    }
  }
  param_5 = 0;
  if ((*(uint *)(param_1 + 0x48) & 2) == 0) {
    if (param_2 == 0) {
      pcVar6 = "vs_4_0";
      goto LAB_1400d463f;
    }
    if ((*(uint *)(param_1 + 0x48) & 1) == 0) {
      pcVar2 = "ps_4_0";
      pcVar6 = "gs_4_0";
    }
    else {
      pcVar2 = "ps_4_1";
      pcVar6 = "gs_4_1";
    }
  }
  else {
    if (param_2 == 0) {
      pcVar6 = "vs_5_0";
      goto LAB_1400d463f;
    }
    pcVar2 = "ps_5_0";
    pcVar6 = "gs_5_0";
  }
  if (param_2 == 2) {
    pcVar6 = pcVar2;
  }
LAB_1400d463f:
  puVar7 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar7 = (undefined8 *)*param_4;
  }
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  IVar3 = (*DAT_1404e52d0)(puVar5,param_3[2],puVar7,0,0,&DAT_140477bb8,pcVar6,0x8800,0,&param_5,
                           local_res18);
  if ((int)IVar3 < 0) {
    uVar4 = (**(code **)(*local_res18[0] + 0x18))();
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    FUN_140098760("%s shader %s error:\n%s\n",pcVar6,param_4,uVar4);
  }
  if (local_res18[0] != (longlong *)0x0) {
    (**(code **)(*local_res18[0] + 0x10))();
  }
  return param_5;
}

