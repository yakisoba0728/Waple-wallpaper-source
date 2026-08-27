// Function: FUN_140345320
// Addr: 140345320
// Size: 235 bytes


ulonglong FUN_140345320(longlong param_1,uint param_2,int param_3,ulonglong *param_4)

{
  short *psVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong in_RAX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  psVar1 = *(short **)(param_1 + 0x4e0);
  if (((((psVar1 != (short *)0x0) && (*(longlong *)(psVar1 + 0x40) != 0)) && (*psVar1 != 0)) &&
      ((uVar4 = *(uint *)(psVar1 + 0xc), uVar4 != 0 &&
       (lVar2 = *(longlong *)(psVar1 + 0x10), lVar2 != 0)))) &&
     ((*param_4 == 0 && (uVar7 = 0, uVar4 != 0)))) {
    do {
      uVar5 = (uVar4 - uVar7 >> 1) + uVar7;
      uVar3 = uVar5 * 6;
      in_RAX = 0;
      uVar6 = (uint)CONCAT11(*(undefined1 *)((ulonglong)uVar3 + 4 + lVar2),
                             *(undefined1 *)((ulonglong)uVar3 + 5 + lVar2));
      if (uVar6 < param_2) {
        uVar7 = uVar5 + 1;
      }
      else {
        lVar8 = (ulonglong)uVar3 + lVar2;
        uVar4 = uVar5;
        if (uVar6 <= param_2) {
          in_RAX = 0;
          uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar8 + 6),*(undefined1 *)(lVar8 + 7)),
                                    *(undefined1 *)(lVar8 + 8)),*(undefined1 *)(lVar8 + 9));
          if ((uVar4 != 0) && (uVar4 <= *(uint *)(psVar1 + 0x44))) {
            in_RAX = (ulonglong)*(uint *)(psVar1 + 0x44) + *(longlong *)(psVar1 + 0x40);
            if ((ulonglong)uVar4 + lVar2 < in_RAX) {
              *param_4 = (ulonglong)uVar4 + lVar2;
              *(bool *)(param_4 + 1) = param_3 == 0;
              return CONCAT71((int7)(in_RAX >> 8),1);
            }
          }
          break;
        }
      }
    } while (uVar7 < uVar4);
  }
  return in_RAX & 0xffffffffffffff00;
}

