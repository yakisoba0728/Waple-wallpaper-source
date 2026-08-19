// Function: FUN_1403f22d0
// Addr: 1403f22d0
// Size: 194 bytes


void FUN_1403f22d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x1202) != '\0') {
    return;
  }
  lVar1 = **(longlong **)(param_1 + 0x11f8);
  if (lVar1 != 0) {
    LOCK();
    bVar8 = lVar1 == **(longlong **)(param_1 + 0x11f8);
    if (bVar8) {
      **(longlong **)(param_1 + 0x11f8) = 0;
    }
    UNLOCK();
    if (bVar8) {
      lVar2 = *(longlong *)(param_1 + 0x11e0);
      lVar7 = lVar2 + 2;
      *(longlong *)(param_1 + 0x11f0) = lVar1;
      if (*(uint *)(param_1 + 0x11ec) <
          (uint)*(byte *)(lVar2 + 8) * 0x100 + (uint)*(byte *)(lVar2 + 9)) {
        pbVar5 = (byte *)(lVar7 + ((ulonglong)*(uint *)(param_1 + 0x11ec) + 2) * 4);
      }
      else {
        pbVar5 = (byte *)&DAT_14045dde0;
      }
      uVar4 = (uint)pbVar5[3] +
              (uint)pbVar5[1] * 0x10000 + (uint)pbVar5[2] * 0x100 + (uint)*pbVar5 * 0x1000000;
      if (uVar4 == 0) {
        puVar3 = &DAT_14045dde0;
      }
      else {
        puVar3 = (undefined8 *)((ulonglong)uVar4 + lVar7);
      }
      iVar6 = (uint)*(byte *)((longlong)puVar3 + 4) * 0x100 + (uint)*(byte *)((longlong)puVar3 + 5);
      *(int *)(param_1 + 0x11e8) = iVar6;
      if (*(char *)(param_1 + 0x1200) == '\0') {
        *(undefined1 *)(param_1 + 0x1202) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1403a4650(lVar1,iVar6,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1402dd8b0(1,0x10);
}

