// Function: FUN_1404c3ee0
// Addr: 1404c3ee0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3ee0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *in_RAX;
  char *pcVar3;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESI;
  undefined4 unaff_00000034;
  char *unaff_RDI;
  byte in_CF;
  byte bVar4;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - unaff_ESI) - (uint)in_CF;
  uVar2 = (uint)in_RAX | *in_RAX;
  bVar6 = (byte)((ulonglong)param_2 >> 8) &
          *(byte *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL) * 4);
  bVar4 = (byte)(uVar2 >> 8) &
          *(byte *)(CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,cVar5))) +
                   CONCAT71(unaff_00000019,unaff_BL) * 4);
  pcVar3 = (char *)(ulonglong)CONCAT22((short)(uVar2 >> 0x10),CONCAT11(bVar4,(char)uVar2));
  bVar6 = bVar6 & *(byte *)(param_1 + CONCAT71(unaff_00000019,unaff_BL) * 4);
  *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,cVar5))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(bVar6,cVar5))) + bVar4;
  puVar1 = (uint *)((longlong)pcVar3 * 2 + -0x1fed0fec);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + CONCAT22(uVar7,CONCAT11(bVar6,cVar5));
  *pcVar3 = *pcVar3 + cVar5 + CARRY4(uVar2,CONCAT22(uVar7,CONCAT11(bVar6,cVar5)));
  *pcVar3 = *pcVar3 + bVar4;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  pcVar3[0x19000004] = pcVar3[0x19000004] + cVar5;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

