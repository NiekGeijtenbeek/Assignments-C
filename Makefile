.PHONY: clean All

All:
	@echo "----------Building project:[ Assignment1_3 - Debug ]----------"
	@cd "Assignment1_3" && "$(MAKE)" -f  "Assignment1_3.mk"
clean:
	@echo "----------Cleaning project:[ Assignment1_3 - Debug ]----------"
	@cd "Assignment1_3" && "$(MAKE)" -f  "Assignment1_3.mk" clean
