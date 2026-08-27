// Function: FUN_140210400
// Addr: 140210400
// Size: 172 bytes


void FUN_140210400(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  int *param_5)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  *param_5 = -1;
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) && ((*param_3 & 0x200) != 0)) &&
     (pcVar2 = (char *)*param_4, *pcVar2 != '\0')) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    lVar5 = *(longlong *)(lVar1 + 0x68);
    if (*(longlong *)(lVar1 + 0x70) - lVar5 >> 6 != 0) {
      iVar4 = 0;
      do {
        iVar3 = FUN_1402c10d0(*(undefined8 *)(lVar5 + 8 + (longlong)iVar4 * 0x40),pcVar2);
        if (iVar3 == 0) {
          *param_5 = iVar4;
          return;
        }
        lVar5 = *(longlong *)(lVar1 + 0x68);
        iVar4 = iVar4 + 1;
      } while ((ulonglong)(longlong)iVar4 < (ulonglong)(*(longlong *)(lVar1 + 0x70) - lVar5 >> 6));
    }
  }
  return;
}

