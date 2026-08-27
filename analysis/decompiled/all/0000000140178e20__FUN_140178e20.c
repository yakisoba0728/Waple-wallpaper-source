// Function: FUN_140178e20
// Addr: 140178e20
// Size: 111 bytes


longlong * FUN_140178e20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_1[1] != 0xaaaaaaaaaaaaaaa) {
    lVar1 = *param_1;
    plVar3 = (longlong *)FUN_14028af20(0x18);
    plVar3[2] = *param_2;
    param_1[1] = param_1[1] + 1;
    puVar2 = *(undefined8 **)(lVar1 + 8);
    *plVar3 = lVar1;
    plVar3[1] = (longlong)puVar2;
    *(longlong **)(lVar1 + 8) = plVar3;
    *puVar2 = plVar3;
    return plVar3 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c2e0("list too long");
}

