// Function: FUN_140210790
// Addr: 140210790
// Size: 195 bytes


void FUN_140210790(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  int *param_5)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  
  *param_5 = -1;
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) && ((*param_3 & 0x200) != 0)) &&
     (pcVar2 = (char *)*param_4, *pcVar2 != '\0')) {
    lVar3 = *(longlong *)(lVar1 + 0x38);
    uVar6 = (*(longlong *)(lVar1 + 0x40) - lVar3 >> 4) * -0x1111111111111111;
    if (uVar6 != 0) {
      iVar5 = 0;
      do {
        cVar4 = FUN_14000d010((longlong)iVar5 * 0xf0 + lVar3,pcVar2);
        if (cVar4 != '\0') {
          *param_5 = iVar5;
          return;
        }
        iVar5 = iVar5 + 1;
      } while ((ulonglong)(longlong)iVar5 < uVar6);
    }
  }
  return;
}

