// Function: FUN_1404cc4c0
// Addr: 1404cc4c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc4c0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  longlong in_RAX;
  byte bVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  uint *puVar4;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + (int)param_1;
  *(uint *)(param_2 + 0x7003e005) = *(uint *)(param_2 + 0x7003e005) | unaff_ESI;
  cVar2 = *(char *)(in_RAX + 0x21);
  uVar3 = (uint)in_RAX | 0xd40d0004;
  puVar4 = (uint *)(ulonglong)uVar3;
  *puVar4 = *puVar4 | uVar3;
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
                   CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar5,(char)param_2 + cVar2)
                           ));
  *pbVar1 = *pbVar1 | bVar5;
  *(byte *)puVar4 = (char)*puVar4 + bVar5;
  in(0x34);
  *(char *)(param_1 + -7) = (char)param_1[-7] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

