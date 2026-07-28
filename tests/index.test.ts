import { sayHello } from "../index";

describe('index page tests', () => {
    it('should say hello world', () => {
        const result = sayHello('world');
        expect(result).toBe('Hello, world');
    })
})