// Function: FUN_1404a3c24
// Addr: 1404a3c24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3c24(char *param_1,byte *param_2)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong in_RAX;
  uint *puVar5;
  undefined1 unaff_BL;
  byte unaff_BH;
  byte bVar6;
  undefined6 unaff_0000001a;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined2 in_ES;
  
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) ^ unaff_BH;
  *param_1 = *param_1;
  uVar3 = *(uint *)(in_RAX * 2);
  uVar4 = (uint)in_RAX - *(uint *)(in_RAX * 2);
  bVar6 = *(byte *)(ulonglong)uVar4;
  puVar5 = (uint *)(ulonglong)
                   CONCAT22((short)(uVar4 >> 0x10),CONCAT11((byte)(uVar4 >> 8) | bVar6,bVar6));
  *(undefined2 *)puVar5 = in_ES;
  piVar2 = (int *)((ulonglong)((unaff_ESI - (int)&stack0x00000000) - (uint)((uint)in_RAX < uVar3)) +
                   0x6a63300 + (longlong)puVar5);
  *piVar2 = *piVar2 << 1;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_RDI);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_1 = *param_1;
  *puVar5 = *puVar5 ^ (uint)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  *param_2 = bVar6;
  bVar6 = unaff_BH & *(byte *)((longlong)puVar5 + 0x43);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar6,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(bVar6,unaff_BL)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

