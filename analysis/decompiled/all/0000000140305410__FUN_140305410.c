// Function: FUN_140305410
// Addr: 140305410
// Size: 311 bytes


void FUN_140305410(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res10 [2];
  int local_res18 [2];
  uint local_res20;
  
  lVar1 = *param_1;
  lVar4 = 0;
  local_res18[0] = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x98);
  param_1[5] = 0;
  param_1[7] = 0;
  local_res10[0] = 0;
  iVar3 = func_0x0001402f1ba0(lVar1,0x47535542,0,0,local_res10);
  if (iVar3 == 0) {
    lVar4 = FUN_1402f8070(uVar2,local_res10[0],local_res18);
    if (local_res18[0] == 0) {
      iVar3 = func_0x0001402f1ba0(lVar1,0x47535542,0,lVar4,local_res10);
      if (((iVar3 == 0) && (9 < local_res10[0])) &&
         (uVar5 = (uint)CONCAT11(*(undefined1 *)(lVar4 + 8),*(undefined1 *)(lVar4 + 9)),
         uVar5 + 2 <= local_res10[0])) {
        local_res20 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar5 + lVar4),
                                     ((undefined1 *)((ulonglong)uVar5 + lVar4))[1]);
        if (local_res20 * 2 + 2 + uVar5 <= local_res10[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_1402f8180(uVar2,4,0,local_res20,0,local_res18);
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 6) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(uVar2,lVar4);
}

