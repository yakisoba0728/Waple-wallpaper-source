// Function: FUN_14040aeb0
// Addr: 14040aeb0
// Size: 323 bytes


ulonglong FUN_14040aeb0(undefined2 *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined2 *in_RAX;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined2 local_res18;
  
  if ((*(int *)(param_2 + 0x2c) == 0) && (in_RAX = param_1 + 1, param_1 <= in_RAX)) {
    lVar1 = *(longlong *)(param_2 + 8);
    puVar4 = (undefined1 *)((longlong)param_1 + (2 - lVar1));
    if ((puVar4 < (undefined1 *)0x80000000) &&
       (in_RAX = (undefined2 *)(*(longlong *)(param_2 + 0x10) - lVar1),
       (longlong)puVar4 <= (longlong)in_RAX)) {
      if ((int)puVar4 != 0) {
        FUN_1404217a0(lVar1,0,(ulonglong)puVar4 & 0xffffffff);
      }
      lVar1 = *(longlong *)(param_2 + 8);
      in_RAX = (undefined2 *)(puVar4 + lVar1);
      *(undefined2 **)(param_2 + 8) = in_RAX;
      if ((lVar1 != 0) && (param_1 != (undefined2 *)0x0)) {
        bVar2 = (byte)(param_3 >> 8);
        local_res18 = CONCAT11((char)param_3,bVar2);
        *param_1 = local_res18;
        uVar3 = (uint)bVar2 * 0x100 + (param_3 & 0xff);
        in_RAX = (undefined2 *)(ulonglong)uVar3;
        if (uVar3 != param_3) {
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
        }
        if (*(int *)(param_2 + 0x2c) == 0) {
          in_RAX = (undefined2 *)0x0;
          if (param_1 <=
              param_1 + (ulonglong)
                        CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + 1)) * 3
                        + 1) {
            lVar1 = *(longlong *)(param_2 + 8);
            uVar5 = (longlong)
                    (param_1 +
                    (ulonglong)
                    CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + 1)) * 3 + 1)
                    - lVar1;
            if ((0x7fffffff < uVar5) ||
               (in_RAX = (undefined2 *)(*(longlong *)(param_2 + 0x10) - lVar1),
               (longlong)in_RAX < (longlong)uVar5)) {
              *(undefined4 *)(param_2 + 0x2c) = 4;
              return (ulonglong)in_RAX & 0xffffffffffffff00;
            }
            if ((int)uVar5 != 0) {
              FUN_1404217a0(lVar1,0,uVar5 & 0xffffffff);
            }
            lVar1 = *(longlong *)(param_2 + 8);
            in_RAX = (undefined2 *)(lVar1 + uVar5);
            *(undefined2 **)(param_2 + 8) = in_RAX;
            if (lVar1 != 0) {
              return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

