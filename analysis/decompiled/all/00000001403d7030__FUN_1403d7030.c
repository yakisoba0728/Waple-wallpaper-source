// Function: FUN_1403d7030
// Addr: 1403d7030
// Size: 272 bytes


uint FUN_1403d7030(undefined8 param_1,longlong *param_2,uint param_3,uint *param_4,uint param_5,
                  uint *param_6,uint param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = FUN_1403986a0(*param_2 + 0x18);
  uVar6 = 0;
  if ((*(longlong *)(lVar5 + 0x10) != 0) && (param_3 != 0)) {
    do {
      uVar2 = *param_4;
      lVar1 = (ulonglong)(uVar2 & 0xff) * 4;
      uVar3 = *(uint *)(lVar1 + *(longlong *)(lVar5 + 0x50));
      if ((uVar3 == 0xffffffff) || (((uVar3 >> 0xb ^ uVar2) & 0xffffff00) != 0)) {
        cVar4 = (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 0x18),uVar2,param_6);
        if (cVar4 == '\0') {
          return uVar6;
        }
        if ((uVar2 < 0x200000) && (*param_6 < 0x80000)) {
          *(uint *)(lVar1 + *(longlong *)(lVar5 + 0x50)) = (uVar2 & 0x1fff00) << 0xb | *param_6;
        }
      }
      else {
        *param_6 = uVar3 & 0x7ffff;
      }
      param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7);
      param_4 = (uint *)((longlong)param_4 + (ulonglong)param_5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  return uVar6;
}

